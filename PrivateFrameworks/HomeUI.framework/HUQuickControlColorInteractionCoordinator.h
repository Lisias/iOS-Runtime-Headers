/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate> {
    HFColorPalette * _colorPalette;
    BOOL  _hasPendingColorPaletteChangeDelegateNotification;
}

@property (nonatomic, retain) HFColorPalette *colorPalette;
@property (nonatomic, readonly) HUQuickControlColorView *controlView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUQuickControlColorInteractionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPendingColorPaletteChangeDelegateNotification;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyDelegateOfColorPaletteChangeIfNecessary;
- (id)colorPalette;
- (void)controlView:(id)arg1 activeModeDidChange:(unsigned int)arg2;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(BOOL)arg2 forFirstTouch:(BOOL)arg3;
- (void)controlView:(id)arg1 showAuxiliaryView:(id)arg2;
- (BOOL)hasPendingColorPaletteChangeDelegateNotification;
- (void)hideAuxiliaryViewForControlView:(id)arg1;
- (id)initWithControlView:(id)arg1 colorPalette:(id)arg2 delegate:(id)arg3;
- (void)setColorPalette:(id)arg1;
- (void)setHasPendingColorPaletteChangeDelegateNotification:(BOOL)arg1;

@end