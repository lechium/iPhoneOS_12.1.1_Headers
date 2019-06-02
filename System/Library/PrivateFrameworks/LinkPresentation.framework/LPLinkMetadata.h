/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, LPImage, LPIconMetadata, LPImageMetadata, LPVideo, LPVideoMetadata, NSArray, LPSpecializationMetadata;

@interface LPLinkMetadata : NSObject <NSSecureCoding, NSCopying> {

	unsigned _version;
	NSURL* _originalURL;
	NSURL* _URL;
	NSString* _title;
	NSString* _summary;
	NSString* _selectedText;
	NSString* _siteName;
	NSString* _itemType;
	NSURL* _relatedURL;
	NSString* _creator;
	NSString* _creatorFacebookProfile;
	NSString* _creatorTwitterUsername;
	NSString* _appleContentID;
	NSString* _appleSummary;
	LPImage* _icon;
	LPIconMetadata* _iconMetadata;
	LPImage* _image;
	LPImageMetadata* _imageMetadata;
	LPVideo* _video;
	LPVideoMetadata* _videoMetadata;
	NSArray* _icons;
	NSArray* _images;
	NSArray* _videos;
	NSArray* _streamingVideos;
	NSArray* _audios;
	LPSpecializationMetadata* _specialization;

}

@property (nonatomic,readonly) unsigned long long _encodedSize; 
@property (nonatomic,readonly) unsigned version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * originalURL;                                    //@synthesize originalURL=_originalURL - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * summary;                                     //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                                //@synthesize selectedText=_selectedText - In the implementation block
@property (nonatomic,copy) NSString * siteName;                                    //@synthesize siteName=_siteName - In the implementation block
@property (nonatomic,copy) NSString * itemType;                                    //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSURL * relatedURL;                                     //@synthesize relatedURL=_relatedURL - In the implementation block
@property (nonatomic,copy) NSString * creator;                                     //@synthesize creator=_creator - In the implementation block
@property (nonatomic,copy) NSString * creatorFacebookProfile;                      //@synthesize creatorFacebookProfile=_creatorFacebookProfile - In the implementation block
@property (nonatomic,copy) NSString * creatorTwitterUsername;                      //@synthesize creatorTwitterUsername=_creatorTwitterUsername - In the implementation block
@property (nonatomic,copy) NSString * appleContentID;                              //@synthesize appleContentID=_appleContentID - In the implementation block
@property (nonatomic,copy) NSString * appleSummary;                                //@synthesize appleSummary=_appleSummary - In the implementation block
@property (nonatomic,retain) LPImage * icon;                                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) LPIconMetadata * iconMetadata;                        //@synthesize iconMetadata=_iconMetadata - In the implementation block
@property (nonatomic,retain) LPImage * image;                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) LPImageMetadata * imageMetadata;                      //@synthesize imageMetadata=_imageMetadata - In the implementation block
@property (nonatomic,retain) LPVideo * video;                                      //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) LPVideoMetadata * videoMetadata;                      //@synthesize videoMetadata=_videoMetadata - In the implementation block
@property (nonatomic,copy) NSArray * icons;                                        //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSArray * images;                                       //@synthesize images=_images - In the implementation block
@property (nonatomic,copy) NSArray * videos;                                       //@synthesize videos=_videos - In the implementation block
@property (nonatomic,copy) NSArray * streamingVideos;                              //@synthesize streamingVideos=_streamingVideos - In the implementation block
@property (nonatomic,copy) NSArray * audios;                                       //@synthesize audios=_audios - In the implementation block
@property (nonatomic,copy) LPSpecializationMetadata * specialization;              //@synthesize specialization=_specialization - In the implementation block
+(id)metadataWithDataRepresentation:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)summary;
-(void)setOriginalURL:(NSURL *)arg1 ;
-(void)setSiteName:(NSString *)arg1 ;
-(NSString *)siteName;
-(void)setVideos:(NSArray *)arg1 ;
-(LPVideo *)video;
-(void)setItemType:(NSString *)arg1 ;
-(void)setCreator:(NSString *)arg1 ;
-(NSString *)itemType;
-(NSArray *)videos;
-(void)setVideo:(LPVideo *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(LPSpecializationMetadata *)specialization;
-(void)setVideoMetadata:(LPVideoMetadata *)arg1 ;
-(unsigned long long)_encodedSize;
-(NSURL *)relatedURL;
-(void)setRelatedURL:(NSURL *)arg1 ;
-(NSString *)creatorFacebookProfile;
-(void)setCreatorFacebookProfile:(NSString *)arg1 ;
-(NSString *)creatorTwitterUsername;
-(void)setCreatorTwitterUsername:(NSString *)arg1 ;
-(NSString *)appleContentID;
-(void)setAppleContentID:(NSString *)arg1 ;
-(NSString *)appleSummary;
-(void)setAppleSummary:(NSString *)arg1 ;
-(LPIconMetadata *)iconMetadata;
-(void)setIconMetadata:(LPIconMetadata *)arg1 ;
-(LPImageMetadata *)imageMetadata;
-(void)setImageMetadata:(LPImageMetadata *)arg1 ;
-(LPVideoMetadata *)videoMetadata;
-(NSArray *)streamingVideos;
-(void)setStreamingVideos:(NSArray *)arg1 ;
-(NSArray *)audios;
-(void)setAudios:(NSArray *)arg1 ;
-(void)setSpecialization:(LPSpecializationMetadata *)arg1 ;
-(void)_reduceSizeByDroppingResourcesIfNeeded;
-(NSString *)creator;
-(id)dataRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)image;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(LPImage *)icon;
-(void)setIcon:(LPImage *)arg1 ;
-(unsigned)version;
-(NSArray *)images;
-(NSURL *)originalURL;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSArray *)icons;
-(NSString *)selectedText;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(void)setIcons:(NSArray *)arg1 ;
@end

