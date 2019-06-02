/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:36 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding> {

	NSString* _category;
	NSArray* _localizedNames;

}

@property (nonatomic,readonly) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(id)poiEventCategoriesForEventCategories:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSArray *)localizedNames;
-(id)initWithEventCategory:(id)arg1 ;
-(id)parsePDCategories:(id)arg1 ;
-(BOOL)isEqualToPOIEventCategory:(id)arg1 ;
-(id)initWithCategory:(id)arg1 localizedNames:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
@end

