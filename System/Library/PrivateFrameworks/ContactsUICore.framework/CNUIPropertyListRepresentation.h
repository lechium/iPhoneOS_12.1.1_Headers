/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CNUIPropertyListRepresentation : NSObject {

	NSDictionary* _propertyList;
	NSDictionary* _attachments;

}

@property (nonatomic,copy,readonly) NSDictionary * propertyList;              //@synthesize propertyList=_propertyList - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * attachments;               //@synthesize attachments=_attachments - In the implementation block
+(id)propertyListWithContentsOfPackageURL:(id)arg1 dataProxy:(id)arg2 ;
+(id)writePropertyList:(id)arg1 toURL:(id)arg2 dataProxy:(id)arg3 fileManager:(id)arg4 ;
-(NSDictionary *)propertyList;
-(id)initWithPropertyList:(id)arg1 attachments:(id)arg2 ;
-(id)attachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)attachments;
@end

