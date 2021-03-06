/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSQuantityReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	double _quantity;

}

@property (assign,nonatomic) double quantity;              //@synthesize quantity=_quantity - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)quantity;
-(void)setQuantity:(double)arg1 ;
-(void)add:(id)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

