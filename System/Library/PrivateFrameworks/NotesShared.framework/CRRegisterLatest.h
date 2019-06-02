/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/CRRegister.h>

@protocol CRDataType;
@class CRTimestamp;

@interface CRRegisterLatest : CRRegister {

	id<CRDataType> _contents;
	CRTimestamp* _timestamp;

}

@property (nonatomic,retain) CRTimestamp * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)_setContents:(id)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 ;
-(id)initWithCRCoder:(id)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)initWithContents:(id)arg1 document:(id)arg2 ;
-(BOOL)isEqualContents:(id)arg1 ;
-(void)encodeIntoProtobufRegisterLatest:(RegisterLatest*)arg1 coder:(id)arg2 ;
-(id)initWithProtobufRegisterLatest:(const RegisterLatest*)arg1 decoder:(id)arg2 ;
-(id)initWithContents:(id)arg1 timestamp:(id)arg2 document:(id)arg3 ;
-(void)mergeWithRegisterLatest:(id)arg1 ;
-(void)mergeWith:(id)arg1 ;
-(id)description;
-(CRTimestamp *)timestamp;
-(id)contents;
-(void)setContents:(id)arg1 ;
-(void)setTimestamp:(CRTimestamp *)arg1 ;
-(void)setDocument:(id)arg1 ;
@end

