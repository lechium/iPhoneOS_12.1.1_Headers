/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedDescriptor.h>
#import <libobjc.A.dylib/FCFeedPaginating.h>

@class NSString;

@interface FCGreatStoriesYouMissedFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupDebug;
+(void)tearDownDebug;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)feedGroupEmittersWithConfiguration:(id)arg1 ;
-(id)feedPaginator;
-(id)editionAtDate:(id)arg1 ;
-(id)editionFollowingEdition:(id)arg1 ;
-(id)name;
@end

