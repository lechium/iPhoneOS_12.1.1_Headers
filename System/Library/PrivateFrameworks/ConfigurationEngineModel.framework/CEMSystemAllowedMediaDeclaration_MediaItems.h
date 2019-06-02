/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMSystemAllowedMediaDeclaration_MediaItems : CEMPayloadBase {

	NSString* _payloadAllMedia;
	NSArray* _payloadCd;
	NSArray* _payloadDvd;
	NSArray* _payloadBd;
	NSArray* _payloadBlankcd;
	NSArray* _payloadBlankdvd;
	NSArray* _payloadBlankbd;
	NSArray* _payloadDvdram;
	NSArray* _payloadDiskImage;
	NSArray* _payloadHarddiskInternal;
	NSArray* _payloadHarddiskExternal;
	NSArray* _payloadNetworkdisk;

}

@property (nonatomic,copy) NSString * payloadAllMedia;                     //@synthesize payloadAllMedia=_payloadAllMedia - In the implementation block
@property (nonatomic,copy) NSArray * payloadCd;                            //@synthesize payloadCd=_payloadCd - In the implementation block
@property (nonatomic,copy) NSArray * payloadDvd;                           //@synthesize payloadDvd=_payloadDvd - In the implementation block
@property (nonatomic,copy) NSArray * payloadBd;                            //@synthesize payloadBd=_payloadBd - In the implementation block
@property (nonatomic,copy) NSArray * payloadBlankcd;                       //@synthesize payloadBlankcd=_payloadBlankcd - In the implementation block
@property (nonatomic,copy) NSArray * payloadBlankdvd;                      //@synthesize payloadBlankdvd=_payloadBlankdvd - In the implementation block
@property (nonatomic,copy) NSArray * payloadBlankbd;                       //@synthesize payloadBlankbd=_payloadBlankbd - In the implementation block
@property (nonatomic,copy) NSArray * payloadDvdram;                        //@synthesize payloadDvdram=_payloadDvdram - In the implementation block
@property (nonatomic,copy) NSArray * payloadDiskImage;                     //@synthesize payloadDiskImage=_payloadDiskImage - In the implementation block
@property (nonatomic,copy) NSArray * payloadHarddiskInternal;              //@synthesize payloadHarddiskInternal=_payloadHarddiskInternal - In the implementation block
@property (nonatomic,copy) NSArray * payloadHarddiskExternal;              //@synthesize payloadHarddiskExternal=_payloadHarddiskExternal - In the implementation block
@property (nonatomic,copy) NSArray * payloadNetworkdisk;                   //@synthesize payloadNetworkdisk=_payloadNetworkdisk - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildRequiredOnly;
+(id)buildWithAllMedia:(id)arg1 withCd:(id)arg2 withDvd:(id)arg3 withBd:(id)arg4 withBlankcd:(id)arg5 withBlankdvd:(id)arg6 withBlankbd:(id)arg7 withDvdram:(id)arg8 withDiskImage:(id)arg9 withHarddiskInternal:(id)arg10 withHarddiskExternal:(id)arg11 withNetworkdisk:(id)arg12 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAllMedia:(NSString *)arg1 ;
-(void)setPayloadCd:(NSArray *)arg1 ;
-(void)setPayloadDvd:(NSArray *)arg1 ;
-(void)setPayloadBd:(NSArray *)arg1 ;
-(void)setPayloadBlankcd:(NSArray *)arg1 ;
-(void)setPayloadBlankdvd:(NSArray *)arg1 ;
-(void)setPayloadBlankbd:(NSArray *)arg1 ;
-(void)setPayloadDvdram:(NSArray *)arg1 ;
-(void)setPayloadDiskImage:(NSArray *)arg1 ;
-(void)setPayloadHarddiskInternal:(NSArray *)arg1 ;
-(void)setPayloadHarddiskExternal:(NSArray *)arg1 ;
-(void)setPayloadNetworkdisk:(NSArray *)arg1 ;
-(NSString *)payloadAllMedia;
-(NSArray *)payloadCd;
-(NSArray *)payloadDvd;
-(NSArray *)payloadBd;
-(NSArray *)payloadBlankcd;
-(NSArray *)payloadBlankdvd;
-(NSArray *)payloadBlankbd;
-(NSArray *)payloadDvdram;
-(NSArray *)payloadDiskImage;
-(NSArray *)payloadHarddiskInternal;
-(NSArray *)payloadHarddiskExternal;
-(NSArray *)payloadNetworkdisk;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

