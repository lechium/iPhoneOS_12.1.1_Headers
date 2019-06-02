/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSArray, NSDictionary;

@interface CRKAirDropTransferInfo : NSObject {

	BOOL _autoAccept;
	BOOL _hideProgress;
	NSString* _senderName;
	NSData* _previewImageData;
	NSString* _bundleID;
	NSArray* _items;
	NSArray* _files;
	NSString* _sourceBundleIdentifier;
	NSString* _itemsDescription;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) BOOL autoAccept;                                             //@synthesize autoAccept=_autoAccept - In the implementation block
@property (assign,nonatomic) BOOL hideProgress;                                           //@synthesize hideProgress=_hideProgress - In the implementation block
@property (nonatomic,copy) NSString * senderName;                                         //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSData * previewImageData;                                     //@synthesize previewImageData=_previewImageData - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                                           //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSArray * items;                                               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * files;                                               //@synthesize files=_files - In the implementation block
@property (nonatomic,copy) NSString * sourceBundleIdentifier;                             //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemsDescription;                                   //@synthesize itemsDescription=_itemsDescription - In the implementation block
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(BOOL)hideProgress;
-(void)setHideProgress:(BOOL)arg1 ;
-(NSData *)previewImageData;
-(void)setPreviewImageData:(NSData *)arg1 ;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(void)setItemsDescription:(NSString *)arg1 ;
-(NSString *)itemsDescription;
-(BOOL)autoAccept;
-(void)setAutoAccept:(BOOL)arg1 ;
-(void)addFiles:(id)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(void)setSourceBundleIdentifier:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)description;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)addItems:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)bundleID;
@end

