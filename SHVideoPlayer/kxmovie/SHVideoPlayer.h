//
//  SHVideoPlayer.h
//  SHVideoPlayer
//
//  Created by york on 2025/6/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class KxMovieDecoder;


@interface SHVideoPlayer : UIView
+ (id) movieViewControllerWithContentPath: (NSString *) path
                               parameters: (NSDictionary *) parameters;

@property (readonly) BOOL playing;
@property (nonatomic,assign) BOOL isViewLoaded;

- (void) play;
- (void) pause;
- (void) restorePlay;
-(void)playWithPath: (NSString *) path;
- (void)didReceiveMemoryWarning;
- (void) fullscreenMode: (BOOL) on;
- (void) viewWillDisappear:(BOOL)animated;
- (void) updatePosition: (CGFloat) position
               playMode: (BOOL) playMode;
@end

NS_ASSUME_NONNULL_END
