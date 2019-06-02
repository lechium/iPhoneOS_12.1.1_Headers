/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCChannelProviding;
@class FCCloudContext, FCTopStoriesOperationResult, NSError;

@interface FCTopStoriesOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	FCCloudContext* _context;
	id<FCChannelProviding> _topStoriesChannel;
	FCTopStoriesOperationResult* _topStoriesResult;
	NSError* _error;
	/*^block*/id _catchUpCompletionHandler;

}

@property (copy) id<FCChannelProviding> topStoriesChannel;                      //@synthesize topStoriesChannel=_topStoriesChannel - In the implementation block
@property (retain) FCTopStoriesOperationResult * topStoriesResult;              //@synthesize topStoriesResult=_topStoriesResult - In the implementation block
@property (retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id<FCCoreConfiguration> configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FCCloudContext * context;                          //@synthesize context=_context - In the implementation block
@property (copy) id catchUpCompletionHandler;                                   //@synthesize catchUpCompletionHandler=_catchUpCompletionHandler - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)catchUpCompletionHandler;
-(void)setCatchUpCompletionHandler:(id)arg1 ;
-(FCTopStoriesOperationResult *)topStoriesResult;
-(id<FCChannelProviding>)topStoriesChannel;
-(void)setTopStoriesChannel:(id<FCChannelProviding>)arg1 ;
-(void)setTopStoriesResult:(FCTopStoriesOperationResult *)arg1 ;
-(void)_checkShouldShowTopStoriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setContext:(FCCloudContext *)arg1 ;
-(FCCloudContext *)context;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
