/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /usr/lib/libBKDM1.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface BLTemplateList : NSObject {

	NSMutableDictionary* _identityList;
	NSMutableDictionary* _templateList;
	NSLock* _listLock;

}
-(void)removeIdentity:(id)arg1 ;
-(void)removeAll;
-(void)setIdentities:(id)arg1 ;
-(id)allIdentities;
-(id)initWithIdentities:(id)arg1 ;
-(id)identitiesForUser:(unsigned)arg1 ;
-(unsigned long long)countForUser:(unsigned)arg1 ;
-(id)templateNameForIdentity:(id)arg1 ;
-(void)setIdentity:(id)arg1 withTemplateName:(id)arg2 ;
-(void)setIdentitiesForUser:(unsigned)arg1 withTemplateListName:(id)arg2 ;
-(id)identityByUUID:(id)arg1 ;
-(void)dealloc;
-(void)setIdentity:(id)arg1 ;
@end
