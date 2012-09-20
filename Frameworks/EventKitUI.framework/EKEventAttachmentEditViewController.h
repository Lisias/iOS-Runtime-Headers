/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSArray, <EKEventAttachmentEditViewControllerDelegate>, UITableView;

@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate, UIDocumentInteractionControllerDelegate> {
    UITableView *_table;
    NSArray *_cellControllers;
    <EKEventAttachmentEditViewControllerDelegate> *_delegate;
}

@property <EKEventAttachmentEditViewControllerDelegate> * delegate;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerWillEndPreview:(id)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 attachments:(id)arg2;
- (id)owningEventForAttachmentCellController:(id)arg1;

@end