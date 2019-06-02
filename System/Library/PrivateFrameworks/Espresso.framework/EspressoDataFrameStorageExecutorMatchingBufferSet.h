/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Espresso/Espresso-Structs.h>
@class NSString;

@interface EspressoDataFrameStorageExecutorMatchingBufferSet : NSObject {

	unsigned long long _index;
	NSString* _name;
	CVBufferRef _computed_pb;
	SCD_Struct_Es2* _reference_buffer;
	SCD_Struct_Es2* _computed_buffer;
	SCD_Struct_Es2* _groundtruth_buffer;

}

@property (assign) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (assign) SCD_Struct_Es2* reference_buffer;                //@synthesize reference_buffer=_reference_buffer - In the implementation block
@property (assign) SCD_Struct_Es2* computed_buffer;                 //@synthesize computed_buffer=_computed_buffer - In the implementation block
@property (assign) CVBufferRef computed_pb;                         //@synthesize computed_pb=_computed_pb - In the implementation block
@property (assign) SCD_Struct_Es2* groundtruth_buffer;              //@synthesize groundtruth_buffer=_groundtruth_buffer - In the implementation block
-(SCD_Struct_Es2*)reference_buffer;
-(void)setReference_buffer:(SCD_Struct_Es2*)arg1 ;
-(SCD_Struct_Es2*)computed_buffer;
-(void)setComputed_buffer:(SCD_Struct_Es2*)arg1 ;
-(CVBufferRef)computed_pb;
-(void)setComputed_pb:(CVBufferRef)arg1 ;
-(SCD_Struct_Es2*)groundtruth_buffer;
-(void)setGroundtruth_buffer:(SCD_Struct_Es2*)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

