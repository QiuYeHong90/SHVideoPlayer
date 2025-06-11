//
//  ViewController.m
//  SHVideoPlayer
//
//  Created by york on 2025/6/11.
//

#import "ViewController.h"
#import <Masonry/Masonry.h>
#import "SHVideoPlayer.h"
#import "kxmovie/KxMovieViewController.h"

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


@end
