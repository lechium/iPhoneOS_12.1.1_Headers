/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _MRRemoveOutputDevicesMessageProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _outputDeviceUIDs;

}

@property (nonatomic,retain) NSMutableArray * outputDeviceUIDs;              //@synthesize outputDeviceUIDs=_outputDeviceUIDs - In the implementation block
+(Class)outputDeviceUIDsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setOutputDeviceUIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputDeviceUIDs;
-(void)addOutputDeviceUIDs:(id)arg1 ;
-(unsigned long long)outputDeviceUIDsCount;
-(void)clearOutputDeviceUIDs;
-(id)outputDeviceUIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
