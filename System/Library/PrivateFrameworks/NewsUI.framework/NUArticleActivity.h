/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@class NSString, UIImage, NSArray;

@interface NUArticleActivity : UIActivity {

	NSString* _activityType;
	NSString* _activityTitle;
	UIImage* _activityImage;
	/*^block*/id _performBlock;
	NSArray* _activityItems;

}

@property (nonatomic,copy,readonly) id performBlock;               //@synthesize performBlock=_performBlock - In the implementation block
@property (nonatomic,retain) NSArray * activityItems;              //@synthesize activityItems=_activityItems - In the implementation block
-(id)performBlock;
-(id)initWithActivityType:(id)arg1 title:(id)arg2 image:(id)arg3 performBlock:(/*^block*/id)arg4 ;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(NSArray *)activityItems;
-(void)setActivityItems:(NSArray *)arg1 ;
@end
