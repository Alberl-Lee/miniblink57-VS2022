// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_APP_LIST_TEST_APP_LIST_TEST_MODEL_H_
#define UI_APP_LIST_TEST_APP_LIST_TEST_MODEL_H_

#include <string>

#include "base/macros.h"
#include "ui/app_list/app_list_folder_item.h"
#include "ui/app_list/app_list_item.h"
#include "ui/app_list/app_list_model.h"

namespace app_list {

namespace test {

    // Extends AppListModel with helper functions for use in tests.
    class AppListTestModel : public AppListModel {
    public:
        class AppListTestItem : public AppListItem {
        public:
            AppListTestItem(const std::string& id, AppListTestModel* model);
            ~AppListTestItem() override;
            void Activate(int event_flags) override;
            const char* GetItemType() const override;

            void SetPosition(const syncer::StringOrdinal& new_position);

        private:
            AppListTestModel* model_;

            DISALLOW_COPY_AND_ASSIGN(AppListTestItem);
        };

        static const char kItemType[];

        AppListTestModel();

        // Raw pointer version convenience versions of AppListModel methods.
        AppListItem* AddItem(AppListItem* item);
        AppListItem* AddItemToFolder(AppListItem* item, const std::string& folder_id);
        void MoveItemToFolder(AppListItem* item, const std::string& folder_id);

        // Generates a name based on |id|.
        std::string GetItemName(int id);

        // Populate the model with |n| items titled "Item #".
        void PopulateApps(int n);

        // Creates and populate a folder with |n| test apps in it.
        AppListFolderItem* CreateAndPopulateFolderWithApps(int n);

        AppListFolderItem* CreateAndAddOemFolder(const std::string& id);

        AppListFolderItem* CreateSingleItemFolder(const std::string& folder_id,
            const std::string& item_id);

        // Populate the model with an item titled "Item |id|".
        void PopulateAppWithId(int id);

        // Get a string of all apps in |model| joined with ','.
        std::string GetModelContent();

        // Creates an item with id |id|. Caller owns the result.
        AppListTestItem* CreateItem(const std::string& id);

        // Creates and adds an item with id |id| to the model. Returns an unowned
        // pointer to the created item.
        AppListTestItem* CreateAndAddItem(const std::string& id);

        // Call SetHighlighted on the specified item.
        void HighlightItemAt(int index);

        int activate_count() { return activate_count_; }
        AppListItem* last_activated() { return last_activated_; }

    private:
        void ItemActivated(AppListTestItem* item);

        int activate_count_;
        AppListItem* last_activated_;

        DISALLOW_COPY_AND_ASSIGN(AppListTestModel);
    };

} // namespace test
} // namespace app_list

#endif // UI_APP_LIST_TEST_APP_LIST_TEST_MODEL_H_
