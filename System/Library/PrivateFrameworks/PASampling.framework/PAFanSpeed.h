/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSString;

@interface PAFanSpeed : NSObject <PASerializable> {

	double _machTimestamp;
	int _fanSpeed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) double machTimesamp;                           //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) int fanSpeed;                                  //@synthesize fanSpeed=_fanSpeed - In the implementation block
@property (readonly) BOOL fanSpeedIsValid; 
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)classDictionaryKey;
+(int)numFans;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithMachTime:(double)arg1 ;
-(double)machTimesamp;
-(id)initWithSerializedFanSpeed:(const SCD_Struct_PA9*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(int)fanSpeed;
-(BOOL)fanSpeedIsValid;
-(id)init;
@end

