/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject {

	BOOL _hidden;
	ICDrawingCommandData* _data;
	TopoID _timestamp;

}

@property (nonatomic,readonly) ICDrawingCommandData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) TopoID timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(TopoID)arg3 ;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 ;
-(BOOL)isEqualDrawingCommand:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(TopoID)timestamp;
-(ICDrawingCommandData *)data;
-(BOOL)hidden;
@end

