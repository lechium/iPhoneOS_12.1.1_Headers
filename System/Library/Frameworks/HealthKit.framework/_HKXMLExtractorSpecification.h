/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:06 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _HKXMLExtractorSpecification : NSObject {

	NSString* _specificationString;
	NSArray* _specificationElements;

}

@property (readonly) NSString * specificationString;               //@synthesize specificationString=_specificationString - In the implementation block
@property (readonly) NSArray * specificationElements;              //@synthesize specificationElements=_specificationElements - In the implementation block
-(id)initWithSpecificationString:(id)arg1 ;
-(BOOL)matchesElementStack:(id)arg1 ;
-(NSString *)specificationString;
-(NSArray *)specificationElements;
@end

