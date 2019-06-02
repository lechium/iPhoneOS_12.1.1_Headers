/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSURL, NSArray, NSString, NSDate, CLSHandout;

@interface CLSHandoutAttachment : CLSObject <CLSRelationable> {

	int _shareType;
	int _permissionType;
	NSURL* _URL;
	NSArray* _contextPath;
	NSString* _title;
	NSString* _bundleIdentifier;
	NSString* _contentStoreIdentifier;
	int _completionStatus;
	long long _displayOrder;
	long long _contextType;
	NSDate* _dateLastCompleted;
	BOOL _locked;
	int _type;
	NSString* _storeIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) BOOL locked;                    //@synthesize locked=_locked - In the implementation block
@property (nonatomic,retain) NSDate * dateLastCompleted; 
@property (nonatomic,copy) NSString * storeIdentifier;                       //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,readonly) int type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int shareType; 
@property (assign,nonatomic) int permissionType; 
@property (assign,nonatomic) long long contextType; 
@property (assign,nonatomic) long long displayOrder; 
@property (nonatomic,copy) NSURL * URL; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,copy) NSArray * contextPath; 
@property (nonatomic,copy) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSString * contentStoreIdentifier; 
@property (nonatomic,readonly) NSString * parentObjectID; 
@property (nonatomic,readonly) CLSHandout * parent; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) int completionStatus; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
+(BOOL)supportsSecureCoding;
+(id)relations;
-(int)completionStatus;
-(void)setCompletionStatus:(int)arg1 ;
-(void)addAsset:(id)arg1 ;
-(void)setShareType:(int)arg1 ;
-(void)setContextType:(long long)arg1 ;
-(long long)displayOrder;
-(void)setDisplayOrder:(long long)arg1 ;
-(int)shareType;
-(NSArray *)assets;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(NSString *)storeIdentifier;
-(id)initWithType:(int)arg1 title:(id)arg2 ;
-(void)mergeWithObject:(id)arg1 ;
-(long long)contextType;
-(void)removeAsset:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(NSString *)contentStoreIdentifier;
-(void)setContentStoreIdentifier:(NSString *)arg1 ;
-(int)permissionType;
-(NSArray *)contextPath;
-(NSDate *)dateLastCompleted;
-(void)setDateLastCompleted:(NSDate *)arg1 ;
-(void)setContextPath:(NSArray *)arg1 ;
-(void)setPermissionType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(int)type;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isComplete;
-(id)dictionaryRepresentation;
-(id)_init;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

