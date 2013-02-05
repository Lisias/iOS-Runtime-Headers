/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@class NSMutableSet, ASAccount, NSString, NSArray;

@interface ASSettingsMailFolderListViewController : PSListController {
    ASAccount *_account;
    NSString *_foldersTag;
    NSString *_inboxID;
    BOOL _loadingMailFolders;
    NSMutableSet *_monitored;
    NSArray *_sortedMailFolders;
    BOOL _viewHasAppeared;
}

- (void)_accountsChanged:(id)arg1;
- (void)_folderHierarchyChanged;
- (void)_foldersThatExternalClientsCareAboutChanged;
- (int)_heightOfASFolder:(id)arg1;
- (id)_inboxID;
- (BOOL)_isFolderMonitored:(id)arg1;
- (void)_loadMailFolders;
- (void)dealloc;
- (id)indexPathForMailFolder:(id)arg1;
- (id)init;
- (id)mailFolderForIndexPath:(id)arg1;
- (void)setAccount:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end