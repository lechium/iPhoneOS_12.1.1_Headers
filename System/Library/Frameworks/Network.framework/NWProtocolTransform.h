/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_protocol_transform;
@class NSObject, NWEndpoint;

@interface NWProtocolTransform : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_protocol_transform> _internalTransform;

}

@property (retain) NSObject*<OS_nw_protocol_transform> internalTransform;              //@synthesize internalTransform=_internalTransform - In the implementation block
@property (assign,nonatomic) BOOL noProxy; 
@property (assign,nonatomic) int multipathService; 
@property (nonatomic,copy) NWEndpoint * replacementEndpoint; 
@property (assign,nonatomic) BOOL tfo; 
@property (assign,nonatomic) BOOL tfoNoCookie; 
@property (assign,nonatomic) BOOL useTFOHeuristics; 
@property (assign,nonatomic) int dataMode; 
@property (assign,nonatomic) unsigned long long fallbackMode; 
@property (assign,nonatomic) BOOL prohibitDirect; 
@property (assign,nonatomic) BOOL disablePathFallback; 
-(id)privateDescription;
-(int)dataMode;
-(void)setDataMode:(int)arg1 ;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(void)setMultipathService:(int)arg1 ;
-(int)multipathService;
-(BOOL)useTFOHeuristics;
-(void)setUseTFOHeuristics:(BOOL)arg1 ;
-(BOOL)noProxy;
-(void)setNoProxy:(BOOL)arg1 ;
-(id)initWithCTransform:(id)arg1 ;
-(void)disableProtocol:(nw_protocol_identifier*)arg1 ;
-(void)clearProtocolsAtLevel:(int)arg1 ;
-(void)appendProtocol:(id)arg1 atLevel:(int)arg2 ;
-(NWEndpoint *)replacementEndpoint;
-(void)setReplacementEndpoint:(NWEndpoint *)arg1 ;
-(unsigned long long)fallbackMode;
-(void)setFallbackMode:(unsigned long long)arg1 ;
-(BOOL)prohibitDirect;
-(void)setProhibitDirect:(BOOL)arg1 ;
-(BOOL)tfo;
-(void)setTfo:(BOOL)arg1 ;
-(BOOL)tfoNoCookie;
-(void)setTfoNoCookie:(BOOL)arg1 ;
-(BOOL)disablePathFallback;
-(void)setDisablePathFallback:(BOOL)arg1 ;
-(NSObject*<OS_nw_protocol_transform>)internalTransform;
-(void)setInternalTransform:(NSObject*<OS_nw_protocol_transform>)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

