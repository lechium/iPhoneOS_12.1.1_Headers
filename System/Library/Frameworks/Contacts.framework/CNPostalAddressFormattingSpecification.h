/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface CNPostalAddressFormattingSpecification : NSObject {

	NSArray* _displayFieldArrangement;
	NSArray* _editingFieldArrangement;
	NSDictionary* _fieldLabelMap;

}

@property (nonatomic,readonly) NSDictionary * fieldLabelMap;                   //@synthesize fieldLabelMap=_fieldLabelMap - In the implementation block
@property (nonatomic,readonly) NSArray * displayFieldArrangement;              //@synthesize displayFieldArrangement=_displayFieldArrangement - In the implementation block
@property (nonatomic,readonly) NSArray * editingFieldArrangement;              //@synthesize editingFieldArrangement=_editingFieldArrangement - In the implementation block
-(id)initWithDisplayFieldArrangement:(id)arg1 editingFieldArrangement:(id)arg2 fieldLabelMap:(id)arg3 ;
-(NSDictionary *)fieldLabelMap;
-(NSArray *)displayFieldArrangement;
-(NSArray *)editingFieldArrangement;
-(id)localizedPlaceholderForKey:(id)arg1 ;
@end

