/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class NSString;

@interface OIXMLAttribute : OIXMLNode {

	NSString* _name;
	NSString* _value;

}
+(id)attributeWithName:(id)arg1 stringValue:(id)arg2 ;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(id)initWithName:(id)arg1 stringValue:(id)arg2 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
@end

