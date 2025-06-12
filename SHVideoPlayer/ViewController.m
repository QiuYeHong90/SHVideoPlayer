//
//  ViewController.m
//  SHVideoPlayer
//
//  Created by york on 2025/6/11.
//

#import <AVKit/AVKit.h>
#import "ViewController.h"
#import <Masonry/Masonry.h>
#import "SHVideoPlayer.h"
#import "kxmovie/KxMovieViewController.h"
#include <libavutil/hwcontext.h>

@interface ViewController ()
@property (weak, nonatomic) IBOutlet SHVideoPlayer *playerView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
}

- (IBAction)buttonClick:(id)sender {
    NSString *path = [[NSBundle mainBundle] pathForResource:@"test" ofType:@"mp4"];
    [self.playerView playWithPath:path];
}
- (IBAction)buttonSytemClick:(id)sender {
    NSString *path = [[NSBundle mainBundle] pathForResource:@"test" ofType:@"mp4"];
    NSURL * url = [[NSURL alloc] initFileURLWithPath:path];
    AVPlayerViewController * playerVC = [[AVPlayerViewController alloc] init];
    AVPlayer * layer = [[AVPlayer alloc] initWithURL:url];
    playerVC.player = layer;
    
    [self presentViewController:playerVC animated:YES completion:^{
        [layer play];
    }];
    
    
}

@end
