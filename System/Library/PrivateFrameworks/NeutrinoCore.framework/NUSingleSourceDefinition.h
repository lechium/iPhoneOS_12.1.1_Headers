/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUSourceDefinition.h>

@protocol NUSourceDerivation;
@interface NUSingleSourceDefinition : NUSourceDefinition {

	id<NUSourceDerivation> _sourceDerivation;

}

@property (retain) id<NUSourceDerivation> sourceDerivation;              //@synthesize sourceDerivation=_sourceDerivation - In the implementation block
-(id<NUSourceDerivation>)sourceDerivation;
-(void)setSourceDerivation:(id<NUSourceDerivation>)arg1 ;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)init;
@end

