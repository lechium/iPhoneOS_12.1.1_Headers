/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>
#import <libobjc.A.dylib/FCFeedViewportRemoveGroupOperationType.h>

@protocol FCCoreConfiguration;
@class FCFeedViewport, NSString, FCFeedDescriptor, FCFeedViewportDiff;

@interface FCFeedViewportRemoveGroupOperation : FCOperation <FCFeedViewportRemoveGroupOperationType> {

	id<FCCoreConfiguration> _configuration;
	FCFeedViewport* _viewport;
	NSString* _groupID;
	FCFeedDescriptor* _feedDescriptor;
	/*^block*/id _removeGroupCompletionHandler;
	FCFeedViewport* _resultViewport;
	FCFeedViewportDiff* _viewportDiff;

}

@property (nonatomic,retain) FCFeedViewport * resultViewport;                  //@synthesize resultViewport=_resultViewport - In the implementation block
@property (nonatomic,retain) FCFeedViewportDiff * viewportDiff;                //@synthesize viewportDiff=_viewportDiff - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCFeedViewport * viewport;                        //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,retain) NSString * groupID;                               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) FCFeedDescriptor * feedDescriptor;                //@synthesize feedDescriptor=_feedDescriptor - In the implementation block
@property (nonatomic,copy) id removeGroupCompletionHandler;                    //@synthesize removeGroupCompletionHandler=_removeGroupCompletionHandler - In the implementation block
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(FCFeedDescriptor *)feedDescriptor;
-(void)setFeedDescriptor:(FCFeedDescriptor *)arg1 ;
-(void)operationDidFinishWithError:(id)arg1 ;
-(FCFeedViewport *)viewport;
-(void)setViewport:(FCFeedViewport *)arg1 ;
-(void)setResultViewport:(FCFeedViewport *)arg1 ;
-(FCFeedViewport *)resultViewport;
-(void)setViewportDiff:(FCFeedViewportDiff *)arg1 ;
-(id)removeGroupCompletionHandler;
-(FCFeedViewportDiff *)viewportDiff;
-(void)setRemoveGroupCompletionHandler:(id)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
@end

