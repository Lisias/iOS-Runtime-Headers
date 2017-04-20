/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperEditingViewController : UIViewController <UIScrollViewDelegate> {
    UIButton * _cancelButton;
    UIVisualEffectView * _cancelButtonBackgroundView;
    <HUWallpaperEditingViewControllerDelegate> * _delegate;
    UIImage * _image;
    UIImageView * _imageView;
    UIScrollView * _scrollView;
    UIButton * _setButton;
    UIVisualEffectView * _setButtonBackgroundView;
    BOOL  _statusBarHidden;
    HFWallpaper * _wallpaper;
}

@property (nonatomic, retain) UIButton *cancelButton;
@property (nonatomic, retain) UIVisualEffectView *cancelButtonBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUWallpaperEditingViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIButton *setButton;
@property (nonatomic, retain) UIVisualEffectView *setButtonBackgroundView;
@property (nonatomic) BOOL statusBarHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFWallpaper *wallpaper;

- (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (void)buttonTouchFinished:(id)arg1;
- (void)buttonTouchStarted:(id)arg1;
- (id)buttonsView;
- (id)cancelButton;
- (id)cancelButtonBackgroundView;
- (id)delegate;
- (id)image;
- (id)imageView;
- (id)initWithWallpaper:(id)arg1 image:(id)arg2 delegate:(id)arg3;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (id)scrollView;
- (id)setButton;
- (id)setButtonBackgroundView;
- (void)setCancelButton:(id)arg1;
- (void)setCancelButtonBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSetButton:(id)arg1;
- (void)setSetButtonBackgroundView:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setWallpaper:(id)arg1;
- (BOOL)statusBarHidden;
- (id)transparentButtonWithTitle:(id)arg1;
- (void)updateScrollViewScale;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)wallpaper;

@end