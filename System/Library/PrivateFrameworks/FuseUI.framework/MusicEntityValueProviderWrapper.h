/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <libobjc.A.dylib/MusicEntityValueProviding.h>

@protocol MusicEntityValueProviding;
@class NSMutableDictionary, NSString;

@interface MusicEntityValueProviderWrapper : NSObject <MusicEntityValueProviding> {

	NSMutableDictionary* _handlers;
	id<MusicEntityValueProviding> _entityValueProvider;

}

@property (nonatomic,readonly) id<MusicEntityValueProviding> entityValueProvider;              //@synthesize entityValueProvider=_entityValueProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<MusicEntityValueProviding>)entityValueProvider;
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3 ;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1 ;
-(id)valuesForEntityProperties:(id)arg1 ;
-(id)initWithEntithValueProvider:(id)arg1 ;
-(void)addHandler:(/*^block*/id)arg1 forProperty:(id)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

