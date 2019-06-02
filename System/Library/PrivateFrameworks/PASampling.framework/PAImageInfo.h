/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PASerializable.h>

@class NSUUID, NSString;

@interface PAImageInfo : NSObject <PASerializable> {

	BOOL _isTextExecSegment;
	unsigned long long _loadAddress;
	unsigned long long _size;
	NSUUID* _imageUUID;
	NSString* _path;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) unsigned long long loadAddress;                //@synthesize loadAddress=_loadAddress - In the implementation block
@property (readonly) unsigned long long size;                       //@synthesize size=_size - In the implementation block
@property (readonly) NSUUID * imageUUID;                            //@synthesize imageUUID=_imageUUID - In the implementation block
@property (readonly) NSString * path;                               //@synthesize path=_path - In the implementation block
@property (readonly) BOOL isTextExecSegment;                        //@synthesize isTextExecSegment=_isTextExecSegment - In the implementation block
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(id)classDictionaryKey;
-(BOOL)isTextExecSegment;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 ;
-(NSUUID *)imageUUID;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 ;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 isTextExecSegment:(BOOL)arg5 ;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)initWithImageInfo:(const void*)arg1 is64Bit:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andPath:(id)arg3 ;
-(void)addNewInformationFromImageInfo:(id)arg1 ;
-(id)initWithSerializedImageInfo:(const SCD_Struct_PA5*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)loadAddress;
-(unsigned long long)size;
-(NSString *)debugDescription;
-(NSString *)path;
@end
