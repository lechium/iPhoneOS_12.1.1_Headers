/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCFeedGroupEmittingContext, FCFeedGroupEmittingCursor, NSString, FCFeedGroup, NSArray;

@interface FCFeedGroupEmittingOperation : FCOperation {

	BOOL _resultFinished;
	/*^block*/id _groupEmittingCompletionHandler;
	FCFeedGroupEmittingContext* _context;
	FCFeedGroupEmittingCursor* _fromCursor;
	FCFeedGroupEmittingCursor* _toCursor;
	NSString* _groupEmitterIdentifier;
	FCFeedGroup* _resultGroup;
	NSArray* _resultGroups;
	FCFeedGroupEmittingCursor* _resultCursor;

}

@property (nonatomic,copy) id groupEmittingCompletionHandler;                       //@synthesize groupEmittingCompletionHandler=_groupEmittingCompletionHandler - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingContext * context;                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingCursor * fromCursor;              //@synthesize fromCursor=_fromCursor - In the implementation block
@property (nonatomic,readonly) FCFeedGroupEmittingCursor * toCursor;                //@synthesize toCursor=_toCursor - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupEmitterIdentifier;              //@synthesize groupEmitterIdentifier=_groupEmitterIdentifier - In the implementation block
@property (nonatomic,retain) FCFeedGroup * resultGroup;                             //@synthesize resultGroup=_resultGroup - In the implementation block
@property (nonatomic,retain) NSArray * resultGroups;                                //@synthesize resultGroups=_resultGroups - In the implementation block
@property (nonatomic,retain) FCFeedGroupEmittingCursor * resultCursor;              //@synthesize resultCursor=_resultCursor - In the implementation block
@property (assign,nonatomic) BOOL resultFinished;                                   //@synthesize resultFinished=_resultFinished - In the implementation block
-(void)operationWillFinishWithError:(id)arg1 ;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(NSString *)groupEmitterIdentifier;
-(void)setResultGroup:(FCFeedGroup *)arg1 ;
-(void)setResultFinished:(BOOL)arg1 ;
-(FCFeedGroupEmittingCursor *)fromCursor;
-(void)setResultCursor:(FCFeedGroupEmittingCursor *)arg1 ;
-(void)setResultGroups:(NSArray *)arg1 ;
-(void)setGroupEmittingCompletionHandler:(id)arg1 ;
-(FCFeedGroupEmittingCursor *)resultCursor;
-(FCFeedGroupEmittingCursor *)toCursor;
-(NSArray *)resultGroups;
-(FCFeedGroup *)resultGroup;
-(BOOL)resultFinished;
-(id)groupEmittingCompletionHandler;
-(FCFeedGroupEmittingContext *)context;
@end
