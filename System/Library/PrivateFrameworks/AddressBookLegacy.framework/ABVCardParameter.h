/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(void)addType:(id)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)addTypes:(id)arg1 ;
-(BOOL)isPrimary;
-(void)finalize;
-(id)grouping;
-(void)setGrouping:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)types;
@end
