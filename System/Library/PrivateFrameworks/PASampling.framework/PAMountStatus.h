/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class NSString, NSMutableArray;

@interface PAMountStatus : NSObject {

	NSString* _path;
	NSString* _type;
	NSMutableArray* _snapshots;

}
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)classDictionaryKey;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)addStatus:(netfs_status*)arg1 atMachTime:(double)arg2 ;
-(BOOL)isBlockingThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 ;
-(BOOL)isUnresponsiveBetweenMachStartTime:(double)arg1 andEndTime:(double)arg2 ;
-(id)copyUnresponsiveDescriptionForThread:(unsigned long long)arg1 withSanitizedPaths:(BOOL)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 includeThreadIDs:(BOOL)arg5 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(id)initWithName:(id)arg1 andType:(id)arg2 ;
-(id)copyName;
-(id)copySanitizedName;
@end

