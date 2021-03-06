/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _websheetURL;
	NSString* _planPurchaseEndpointType;
	NSString* _warningText;
	BOOL _applePaySupported;

}

@property (assign,nonatomic) BOOL applePaySupported;                             //@synthesize applePaySupported=_applePaySupported - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * websheetURL;                           //@synthesize websheetURL=_websheetURL - In the implementation block
@property (nonatomic,readonly) NSString * planPurchaseEndpointType;              //@synthesize planPurchaseEndpointType=_planPurchaseEndpointType - In the implementation block
@property (nonatomic,readonly) NSString * warningText;                           //@synthesize warningText=_warningText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithName:(id)arg1 url:(id)arg2 applePaySupported:(BOOL)arg3 responseType:(id)arg4 warningText:(id)arg5 ;
-(NSString *)websheetURL;
-(BOOL)applePaySupported;
-(void)setApplePaySupported:(BOOL)arg1 ;
-(NSString *)planPurchaseEndpointType;
-(NSString *)warningText;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

