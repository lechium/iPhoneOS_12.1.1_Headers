/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@interface __VMULeaksMarkerObject : NSObject {

	SCD_Struct_VM8* _region;
	unsigned _entryIndex;

}

@property (assign,nonatomic) SCD_Struct_VM8* region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned entryIndex;                 //@synthesize entryIndex=_entryIndex - In the implementation block
-(void)dealloc;
-(void)setRegion:(SCD_Struct_VM8*)arg1 ;
-(SCD_Struct_VM8*)region;
-(unsigned)entryIndex;
-(void)setEntryIndex:(unsigned)arg1 ;
@end

