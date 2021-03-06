/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FCFDBFeed;

@interface FCFeedInsertionToken : NSObject {

	FCFDBFeed* _fromFeed;
	unsigned long long _fromOrder;
	unsigned long long _toOrder;

}

@property (nonatomic,retain) FCFDBFeed * fromFeed;                      //@synthesize fromFeed=_fromFeed - In the implementation block
@property (assign,nonatomic) unsigned long long fromOrder;              //@synthesize fromOrder=_fromOrder - In the implementation block
@property (assign,nonatomic) unsigned long long toOrder;                //@synthesize toOrder=_toOrder - In the implementation block
-(FCFDBFeed *)fromFeed;
-(unsigned long long)fromOrder;
-(unsigned long long)toOrder;
-(void)setFromFeed:(FCFDBFeed *)arg1 ;
-(void)setFromOrder:(unsigned long long)arg1 ;
-(void)setToOrder:(unsigned long long)arg1 ;
@end

