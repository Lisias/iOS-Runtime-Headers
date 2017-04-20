/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying> {
    BOOL  _cameFromGroup;
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _creativeId;
    int  _displayRank;
    int  _feedCellHostType;
    int  _feedCellSection;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    int  _feedViewPresentationReason;
    NSString * _groupFeedId;
    int  _groupType;
    struct { 
        unsigned int displayRank : 1; 
        unsigned int feedCellHostType : 1; 
        unsigned int feedCellSection : 1; 
        unsigned int feedType : 1; 
        unsigned int feedViewPresentationReason : 1; 
        unsigned int groupType : 1; 
        unsigned int recommendationBrickType : 1; 
        unsigned int subscribeUnsubscribeLocation : 1; 
        unsigned int userAction : 1; 
        unsigned int cameFromGroup : 1; 
        unsigned int isPaidSubscriberToFeed : 1; 
    }  _has;
    BOOL  _isPaidSubscriberToFeed;
    int  _recommendationBrickType;
    NSString * _searchString;
    int  _subscribeUnsubscribeLocation;
    NSMutableArray * _subscribedFeedIds;
    int  _userAction;
}

@property (nonatomic) BOOL cameFromGroup;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) int displayRank;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) int feedCellSection;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) int feedViewPresentationReason;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic) BOOL hasCameFromGroup;
@property (nonatomic, readonly) BOOL hasCampaignId;
@property (nonatomic, readonly) BOOL hasCampaignType;
@property (nonatomic, readonly) BOOL hasCreativeId;
@property (nonatomic) BOOL hasDisplayRank;
@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) BOOL hasFeedCellSection;
@property (nonatomic, readonly) BOOL hasFeedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic, readonly) BOOL hasFeedViewExposureId;
@property (nonatomic) BOOL hasFeedViewPresentationReason;
@property (nonatomic, readonly) BOOL hasGroupFeedId;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) BOOL hasIsPaidSubscriberToFeed;
@property (nonatomic) BOOL hasRecommendationBrickType;
@property (nonatomic, readonly) BOOL hasSearchString;
@property (nonatomic) BOOL hasSubscribeUnsubscribeLocation;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) BOOL isPaidSubscriberToFeed;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic) int subscribeUnsubscribeLocation;
@property (nonatomic, retain) NSMutableArray *subscribedFeedIds;
@property (nonatomic) int userAction;

+ (Class)subscribedFeedIdsType;

- (void).cxx_destruct;
- (int)StringAsFeedCellHostType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsFeedViewPresentationReason:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsRecommendationBrickType:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (BOOL)cameFromGroup;
- (id)campaignId;
- (id)campaignType;
- (void)clearSubscribedFeedIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (int)displayRank;
- (int)feedCellHostType;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)feedCellSection;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (int)feedViewPresentationReason;
- (id)feedViewPresentationReasonAsString:(int)arg1;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (BOOL)hasCameFromGroup;
- (BOOL)hasCampaignId;
- (BOOL)hasCampaignType;
- (BOOL)hasCreativeId;
- (BOOL)hasDisplayRank;
- (BOOL)hasFeedCellHostType;
- (BOOL)hasFeedCellSection;
- (BOOL)hasFeedId;
- (BOOL)hasFeedType;
- (BOOL)hasFeedViewExposureId;
- (BOOL)hasFeedViewPresentationReason;
- (BOOL)hasGroupFeedId;
- (BOOL)hasGroupType;
- (BOOL)hasIsPaidSubscriberToFeed;
- (BOOL)hasRecommendationBrickType;
- (BOOL)hasSearchString;
- (BOOL)hasSubscribeUnsubscribeLocation;
- (BOOL)hasUserAction;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaidSubscriberToFeed;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)recommendationBrickType;
- (id)recommendationBrickTypeAsString:(int)arg1;
- (id)searchString;
- (void)setCameFromGroup:(BOOL)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setDisplayRank:(int)arg1;
- (void)setFeedCellHostType:(int)arg1;
- (void)setFeedCellSection:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFeedViewPresentationReason:(int)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasCameFromGroup:(BOOL)arg1;
- (void)setHasDisplayRank:(BOOL)arg1;
- (void)setHasFeedCellHostType:(BOOL)arg1;
- (void)setHasFeedCellSection:(BOOL)arg1;
- (void)setHasFeedType:(BOOL)arg1;
- (void)setHasFeedViewPresentationReason:(BOOL)arg1;
- (void)setHasGroupType:(BOOL)arg1;
- (void)setHasIsPaidSubscriberToFeed:(BOOL)arg1;
- (void)setHasRecommendationBrickType:(BOOL)arg1;
- (void)setHasSubscribeUnsubscribeLocation:(BOOL)arg1;
- (void)setHasUserAction:(BOOL)arg1;
- (void)setIsPaidSubscriberToFeed:(BOOL)arg1;
- (void)setRecommendationBrickType:(int)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSubscribeUnsubscribeLocation:(int)arg1;
- (void)setSubscribedFeedIds:(id)arg1;
- (void)setUserAction:(int)arg1;
- (int)subscribeUnsubscribeLocation;
- (id)subscribedFeedIds;
- (id)subscribedFeedIdsAtIndex:(unsigned int)arg1;
- (unsigned int)subscribedFeedIdsCount;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end