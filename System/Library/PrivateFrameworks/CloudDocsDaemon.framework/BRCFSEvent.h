/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BRCFSEvent : NSObject {

	NSString* _path;
	unsigned _flags;
	unsigned long long _eventID;

}

@property (nonatomic,retain) NSString * path;                           //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) unsigned flags;                            //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) unsigned long long eventID;              //@synthesize eventID=_eventID - In the implementation block
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(id)initWithPath:(id)arg1 flags:(unsigned)arg2 eventID:(unsigned long long)arg3 ;
-(unsigned long long)eventID;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
@end

