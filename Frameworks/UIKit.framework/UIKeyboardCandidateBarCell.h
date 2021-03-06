/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateBarCell : UICollectionViewCell <UIKBCacheableView> {
    UILabel * _annotationLabel;
    NSString * _annotationText;
    bool  _beginsFirstPage;
    NSString * _candidateText;
    UIView * _centeredBackgroundView;
    bool  _endsLastPage;
    bool  _isAtLeftEdge;
    bool  _isAutocorrectionCandidate;
    UILabel * _label;
    UIKBThemedView * _themedView;
}

@property (nonatomic, retain) UILabel *annotationLabel;
@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic) bool beginsFirstPage;
@property (nonatomic, readonly) bool cacheDeferable;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) double cachedWidth;
@property (nonatomic, copy) NSString *candidateText;
@property (nonatomic, retain) UIView *centeredBackgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool endsLastPage;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAtLeftEdge;
@property (nonatomic) bool isAutocorrectionCandidate;
@property (nonatomic, readonly) bool keepNonPersistent;
@property (nonatomic, retain) UILabel *label;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIKBThemedView *themedView;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)annotationFont;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cacheInsets;
+ (bool)drawsSideBorders;
+ (id)font;
+ (bool)highlightAffectsBackground;
+ (id)reuseIdentifier;
+ (id)textColorWithHighlight:(bool)arg1 whiteText:(bool)arg2;
+ (double)widthForCandidate:(id)arg1;

- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)annotationLabel;
- (id)annotationText;
- (void)applyLayoutAttributes:(id)arg1;
- (bool)beginsFirstPage;
- (bool)cacheDeferable;
- (id)cacheKey;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (double)cachedWidth;
- (id)candidateText;
- (id)centeredBackgroundView;
- (void)didMoveToWindow;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)endsLastPage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAtLeftEdge;
- (bool)isAutocorrectionCandidate;
- (bool)keepNonPersistent;
- (id)label;
- (void)prepareForReuse;
- (void)setAnnotationLabel:(id)arg1;
- (void)setAnnotationText:(id)arg1;
- (void)setBeginsFirstPage:(bool)arg1;
- (void)setCandidate:(id)arg1;
- (void)setCandidateText:(id)arg1;
- (void)setCenteredBackgroundView:(id)arg1;
- (void)setEndsLastPage:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsAtLeftEdge:(bool)arg1;
- (void)setIsAutocorrectionCandidate:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setThemedView:(id)arg1;
- (id)themedView;
- (void)updateIsAtLeftEdgeState;
- (void)updateLabels;

@end
