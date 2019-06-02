/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSRelation : NSObject {

	BOOL _faultable;
	Class _fromEntity;
	NSString* _fromKey;
	Class _toEntity;
	NSString* _toKey;

}

@property (nonatomic,readonly) Class fromEntity;                               //@synthesize fromEntity=_fromEntity - In the implementation block
@property (nonatomic,readonly) NSString * fromKey;                             //@synthesize fromKey=_fromKey - In the implementation block
@property (nonatomic,readonly) Class toEntity;                                 //@synthesize toEntity=_toEntity - In the implementation block
@property (nonatomic,readonly) NSString * toKey;                               //@synthesize toKey=_toKey - In the implementation block
@property (getter=isFaultable,nonatomic,readonly) BOOL faultable;              //@synthesize faultable=_faultable - In the implementation block
-(id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(BOOL)arg5 ;
-(NSString *)fromKey;
-(Class)toEntity;
-(BOOL)isInverseOfRelation:(id)arg1 ;
-(BOOL)isEquivalentToRelation:(id)arg1 ;
-(NSString *)toKey;
-(BOOL)isFaultable;
-(Class)fromEntity;
-(id)description;
@end

