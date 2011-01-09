/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/CorePDF.framework/CorePDF
 */

@class UIPDFDocument, UIPDFSelection, UIPDFViewPrivateVars;



@interface UIPDFView : UIView <UIGestureRecognizerDelegate>
{
    UIPDFDocument *_document;
    NSInteger _displayMode;
    NSInteger _currentPageIndex;
    UIPDFSelection *_selection;
    UIPDFViewPrivateVars *_pdfPriv;
}

@property(retain) UIPDFSelection *selection;
@property NSInteger currentPageIndex;
@property NSInteger displayMode;
@property(retain) UIPDFDocument *document;


- (void)setCurrentPage:(id)arg1;
- (id)currentPage;
- (void)didMoveToSuperview;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)selection;
- (void)setSelection:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })contentSize;
- (struct CGPoint { float x1; float x2; })contentOffset;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setDocument:(id)arg1;
- (id)document;
- (long)currentPageIndex;
- (void)setCurrentPageIndex:(long)arg1;
- (id)enclosingScrollView;
- (void)doubleTapPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDisplayMode:(NSInteger)arg1;
- (NSInteger)displayMode;
- (id)pageNearestPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromPage:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromPage:(id)arg2;
- (struct CGSize { float x1; float x2; })idealViewSizeForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)movementDidEnd;
- (void)resetFrameAndLayout;
- (void)createContentLayerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 pageLayout:(struct UIPDFPageLayout { }*)arg2;
- (void)singleTapPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })viewBoundsForPageAtIndex:(long)arg1;
- (float)scaleForRenderingAtFixedSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectPixelAligned:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (struct CGPoint { float x1; float x2; })pointPixelAligned:(struct CGPoint { float x1; float x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)resetSelectionLayer;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)setLoupe:(BOOL)arg1;
- (void)showLoupe:(id)arg1 at:(struct CGPoint { float x1; float x2; })arg2;
- (void)showMagnifier:(id)arg1 at:(struct CGPoint { float x1; float x2; })arg2;
- (void)moveMagnifierTo:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPDFNode { }*)textLineAt:(struct CGPoint { float x1; float x2; })arg1;
- (float)currentZoomScale;
- (BOOL)linkAt:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toPage:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfSelectedTextLine;
- (BOOL)trackingLeftControl;
- (id)selectionLayer;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toPage:(id)arg2;
- (float)documentScale;
- (void)hideMagnifier;
- (void)drawPage:(id)arg1 inContext:(struct CGContext { }*)arg2;

@end