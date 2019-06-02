/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSUUID, NSString, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject {

	NSUUID* _activityUUID;
	NSString* _activityType;
	long long _activityCategory;
	UISUIActivityExtensionItemDataRequest* _underlyingActivityItemDataRequest;
	Class _remoteClass;
	CGSize _thumbnailSize;
	/*^block*/id _didFinishPreparingForExecution;
	/*^block*/id _didFinishPerformingActivityHandler;

}

@property (nonatomic,copy) id didFinishPerformingActivityHandler;              //@synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler - In the implementation block
@property (nonatomic,copy) id didFinishPreparingForExecution;                  //@synthesize didFinishPreparingForExecution=_didFinishPreparingForExecution - In the implementation block
+(void)forwardInvocation:(id)arg1 ;
+(id)activityProxyForServiceActivityDataRequest:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)_cleanup;
-(CGSize)_thumbnailSize;
-(id)activityTitle;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(BOOL)_activitySupportsPromiseURLs;
-(id)activityViewController;
-(void)forwardInvocation:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isExecutedInProcess;
-(id)_embeddedActivityViewController;
-(void)_willBePerformedOrPresented;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(id)activityUUID;
-(id)initWithUnderlyingActivityItemDataRequest:(id)arg1 ;
-(BOOL)allowsEmbedding;
-(id)didFinishPreparingForExecution;
-(void)setDidFinishPreparingForExecution:(id)arg1 ;
-(id)didFinishPerformingActivityHandler;
-(void)setDidFinishPerformingActivityHandler:(id)arg1 ;
@end
