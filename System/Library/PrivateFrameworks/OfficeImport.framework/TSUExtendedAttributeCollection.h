/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {

	NSMutableDictionary* _attributes;

}
-(id)extendedAttributeForName:(id)arg1 ;
-(void)setExtendedAttributeValue:(id)arg1 forName:(id)arg2 ;
-(id)initWithPath:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(BOOL)setAttributeCollectionToPath:(id)arg1 intent:(unsigned)arg2 options:(int)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithAttributes:(id)arg1 ;
-(id)allAttributes;
@end

