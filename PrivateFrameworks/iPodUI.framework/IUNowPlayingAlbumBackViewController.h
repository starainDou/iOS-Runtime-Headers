/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUModalContext, UITableView, IUBackOfAlbumDataSource, IUNowPlayingAlbumBackView, UIImage, MPMediaQuery, NSString, IUBackOfAlbumTableViewController;

@interface IUNowPlayingAlbumBackViewController : MPViewController <IUBackOfAlbumTableViewControllerDelegate, MPSwipableViewDelegate> {
    unsigned int _skipNextScrollToVisible : 1;
    IUNowPlayingAlbumBackView *_backView;
    id _coverFlowDelegate;
    MPMediaQuery *_customQuery;
    IUBackOfAlbumDataSource *_dataSource;
    IUModalContext *_modalContext;
    int _style;
    IUBackOfAlbumTableViewController *_tableViewController;
}

@property(retain) UIImage * artworkImage;
@property id coverFlowDelegate;
@property(retain) MPMediaQuery * customQuery;
@property(readonly) IUBackOfAlbumDataSource * dataSource;
@property(retain) IUModalContext * modalContext;
@property int style;
@property(retain) NSString * subtitle;
@property(readonly) UITableView * tableView;
@property(retain) NSString * title;

- (id)_backView;
- (void)_dataSourceInvalidated:(id)arg1;
- (void)_databaseContentsDidChangeNotification:(id)arg1;
- (void)_handleSwipeRight;
- (void)_reloadData;
- (void)_reloadDataFromItemChange:(BOOL)arg1;
- (void)_scrollCurrentRowToVisible;
- (BOOL)_shouldUseQueryRepresentativeTrackForItem;
- (id)_tableViewController;
- (void)_trackWillChangeNotification:(id)arg1;
- (void)accessoryButtonTapped:(id)arg1;
- (id)artworkImage;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (id)coverFlowDelegate;
- (id)customQuery;
- (id)dataSource;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (id)modalContext;
- (void)setArtworkImage:(id)arg1;
- (void)setCoverFlowDelegate:(id)arg1;
- (void)setCustomQuery:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setModalContext:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (int)style;
- (id)subtitle;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (id)tableView;
- (void)tableViewController:(id)arg1 didPerformDefaultActionForRow:(int)arg2;
- (id)title;

@end