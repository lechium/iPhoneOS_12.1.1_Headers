/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(BOOL)addURL:(id)arg1 ;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(BOOL)removeAllImages;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)removeAllURLs;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
