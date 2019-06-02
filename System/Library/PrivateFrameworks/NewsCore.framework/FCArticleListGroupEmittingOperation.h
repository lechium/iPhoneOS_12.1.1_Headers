/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString, FCFeedGroup;

@interface FCArticleListGroupEmittingOperation : FCFeedGroupEmittingOperation {

	/*^block*/id _headlineFilter;
	NSString* _articleList;
	FCFeedGroup* _group;

}

@property (nonatomic,readonly) NSString * articleList;              //@synthesize articleList=_articleList - In the implementation block
@property (nonatomic,readonly) FCFeedGroup * group;                 //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id headlineFilter;                       //@synthesize headlineFilter=_headlineFilter - In the implementation block
-(void)performOperation;
-(NSString *)articleList;
-(id)initWithContext:(id)arg1 articleList:(id)arg2 group:(id)arg3 ;
-(id)headlineFilter;
-(void)setHeadlineFilter:(id)arg1 ;
-(FCFeedGroup *)group;
@end
