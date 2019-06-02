/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@class NSMutableDictionary;

@interface RAWKernels : NSObject {

	NSMutableDictionary* priv;

}
+(id)kernelWithName:(id)arg1 ;
+(id)sharedKernels;
+(id)kernelWithName:(id)arg1 group:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)kernelSourceForGroup:(id)arg1 ;
-(id)loadKernelsForGroup:(id)arg1 ;
-(id)kernelWithName:(id)arg1 group:(id)arg2 ;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

