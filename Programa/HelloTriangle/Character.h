class Character {
    float x;
    float y;
    float width;
    float height;
    float scale;  // Variável de escala
    unsigned int points;

public:
    Character(float x, float y, float w, float h, float scale = 1.0f) {
        this->x = x;
        this->y = y;
        this->width = w;
        this->height = h;
        this->scale = scale;  // Inicialize a escala
        this->points = 0;
    }

    float getX() {
        return this->x;
    }

    float getY() {
        return this->y;
    }

    void setX(float x) {
        this->x = x;
    }

    void setY(float y) {
        this->y = y;
    }

    void setScale(float scale) {
        this->scale = scale;
    }

    float getScale() {
        return this->scale;
    }

    void setPoits(int points) {
        this->points = points;
    }

    int getWidth() {
        return this->width;
    }

    int getHeight() {
        return this->height;
    }
};
