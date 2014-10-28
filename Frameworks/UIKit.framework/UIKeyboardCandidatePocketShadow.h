/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidatePocketShadow : UIView {
    BOOL _drawsShadow;
    BOOL _shadowFadesToBottom;
    float _shadowHeightGrowthFactor;
}

@property BOOL drawsShadow;
@property BOOL shadowFadesToBottom;
@property float shadowHeightGrowthFactor;

+ (float)width;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)drawsShadow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDrawsShadow:(BOOL)arg1;
- (void)setShadowFadesToBottom:(BOOL)arg1;
- (void)setShadowHeightGrowthFactor:(float)arg1;
- (BOOL)shadowFadesToBottom;
- (float)shadowHeightGrowthFactor;

@end