/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSource.h>

@class NUSourceDefinition;

@interface NUResolvedSource : NUSource {

	NUSourceDefinition* _resolvedSourceDefinition;

}

@property (retain) NUSourceDefinition * resolvedSourceDefinition;              //@synthesize resolvedSourceDefinition=_resolvedSourceDefinition - In the implementation block
-(id)sourceDefinition:(out id*)arg1 ;
-(NUSourceDefinition *)resolvedSourceDefinition;
-(void)setResolvedSourceDefinition:(NUSourceDefinition *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
