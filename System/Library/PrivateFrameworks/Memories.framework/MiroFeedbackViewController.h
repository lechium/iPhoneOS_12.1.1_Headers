/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class MiroMovie;

@interface MiroFeedbackViewController : UIViewController {

	/*^block*/id _completion;
	MiroMovie* _tapToRadarMovie;

}

@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) MiroMovie * tapToRadarMovie;              //@synthesize tapToRadarMovie=_tapToRadarMovie - In the implementation block
-(MiroMovie *)tapToRadarMovie;
-(void)cancelAction:(id)arg1 ;
-(void)tapToRadarAction:(id)arg1 ;
-(void)setTapToRadarMovie:(MiroMovie *)arg1 ;
-(void)viewDidLoad;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)didReceiveMemoryWarning;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
@end

