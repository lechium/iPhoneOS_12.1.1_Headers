/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {

	NSSet* _propertiesToFind;
	NSString* _expandedName;
	NSString* _expandedNameSpace;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                  //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) NSString * expandedName;                   //@synthesize expandedName=_expandedName - In the implementation block
@property (nonatomic,retain) NSString * expandedNameSpace;              //@synthesize expandedNameSpace=_expandedNameSpace - In the implementation block
-(void)setPropertiesToFind:(NSSet *)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(NSString *)expandedName;
-(void)setExpandedName:(NSString *)arg1 ;
-(NSString *)expandedNameSpace;
-(void)setExpandedNameSpace:(NSString *)arg1 ;
-(NSSet *)propertiesToFind;
@end

